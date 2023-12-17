#include <sys/types.h>
#include <elf.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_ELF(unsigned char *ELF_item);
void print_magic(unsigned char *ELF_item);
void print_class(unsigned char *ELF_item);
void print_data(unsigned char *ELF_item);
void print_version(unsigned char *ELF_item);
void print_abi(unsigned char *ELF_item);
void print_osabi(unsigned char *ELF_item);
void print_type(unsigned int ELF_type, unsigned char *ELF_item);
void print_entry(unsigned long int e_entry, unsigned char *ELF_item);
void close_ELF(int elf);

/**
 * check_ELF - Checks if a file is an ELF file or not.
 * @ELF_item: A pointer to an array containing the ELF magic numbers.
 *
 * Description: false -> exit code 98.
 */
void check_ELF(unsigned char *ELF_item)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (ELF_item[index] != 127 &&
		    ELF_item[index] != 'E' &&
		    ELF_item[index] != 'L' &&
		    ELF_item[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF header separated by spaces.
 * @ELF_item: A pointer to an array containing the ELF magic numbers.
 * Return: nothing
 */
void print_magic(unsigned char *ELF_item)
{
	int index;

	printf(" Magic: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", ELF_item[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints the class of an ELF header.
 * @ELF_item: A pointer to an array containing the ELF class.
 * Return: nothing
 */
void print_class(unsigned char *ELF_item)
{
	printf(" Class: ");

	switch (ELF_item[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ELF_item[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @ELF_item: A pointer to an array containing the ELF class.
 * Return: nothing
 */
void print_data(unsigned char *ELF_item)
{
	printf(" Data: ");

	switch (ELF_item[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", ELF_item[EI_CLASS]);
	}
}

/**
 * print_version - Print ELF header version.
 * @ELF_item: A pointer to an array containing the ELF version.
 * Return: nothing
 */
void print_version(unsigned char *ELF_item)
{
	 printf(" Version: %d",
			  ELF_item[EI_VERSION]);

	switch (ELF_item[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @ELF_item: A pointer to an array containing the ELF version.
 * Return: nothing
 */
void print_osabi(unsigned char *ELF_item)
{
	printf(" OS/ABI: ");

	switch (ELF_item[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", ELF_item[EI_OSABI]);
	}
}

/**
 * print_abi - Prints the ABI version of an ELF header.
 * @ELF_item: A pointer to an array containing the ELF ABI version.
 * Return: nothing
 */
void print_abi(unsigned char *ELF_item)
{
	printf(" ABI Version: %d\n",
		ELF_item[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @ELF_type: The ELF type.
 * @ELF_item: A pointer to an array containing the ELF class.
 */
void print_type(unsigned int ELF_type, unsigned char *ELF_item)
{
	if (ELF_item[EI_DATA] == ELFDATA2MSB)
		ELF_type >>= 8;

	printf(" Type: ");

	switch (ELF_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", ELF_type);
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @e_entry: The address of the ELF entry point.
 * @ELF_item: A pointer to an array containing the ELF class.
 */
void print_entry(unsigned long int e_entry, unsigned char *ELF_item)
{
	printf(" Entry point address: ");

	if (ELF_item[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (ELF_item[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_ELF - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Return: nothing in success,  If the file cannot be closed - exit code 98.
 */
void close_ELF(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the ELF header when starts
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments vector.
 *
 * Return: 0 on success. If not an ELF File exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int r;
	int o;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_ELF(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_ELF(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_ELF(header->ELF_item);
	printf("ELF Header:\n");
	print_magic(header->ELF_item);
	print_class(header->ELF_item);
	print_data(header->ELF_item);
	print_version(header->ELF_item);
	print_osabi(header->ELF_item);
	print_abi(header->ELF_item);
	print_type(header->ELF_type, header->ELF_item);
	print_entry(header->e_entry, header->ELF_item);
	free(header);
	close_ELF(o);
	return (0);
}

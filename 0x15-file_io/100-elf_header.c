#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr))
	{
		printf("Error: Can't read ELF header\n");
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic: 0x%x\n", ehdr.e_ident[EI_MAG0]);
	printf("  Class: %d\n", ehdr.e_ident[EI_CLASS]);
	printf("  Data: %d\n", ehdr.e_ident[EI_DATA]);
	printf("  Version: %d\n", ehdr.e_ident[EI_VERSION]);
	printf("  OS/ABI: %d\n", ehdr.e_ident[EI_OSABI]);
	printf("  ABI Version: %d\n", ehdr.e_ident[EI_ABIVERSION]);
	printf("  Type: %d\n", ehdr.e_type);
	printf("  Entry point address: 0x%lx\n", ehdr.e_entry);
	close(fd);
	return (0);
}

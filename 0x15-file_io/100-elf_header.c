#include"main.h"

void check_elfnum(unsigned char *elf_num);
void print_magc(unsigned char *elf_num);
void print_class_of(unsigned char *elf_num);
void print_data_of(unsigned char *elf_num);
void print_version_of(unsigned char *elf_num);
void print_abi_(unsigned char *elf_num);
void print_os_abi(unsigned char *elf_num);
void print_type_of(unsigned int elf_type, unsigned char *elf_num);
void print_entry_(unsigned long int elf_entry, unsigned char *elf_num);
void close_elf_(int elfd);

/**
 * check_elfnum - checks if it is an ELF file.
 * @elf_num: pointer to array of ELF magic numbers.
 */
void check_elfnum(unsigned char *elf_num)
{
int idx;

for (idx = 0; idx < 4; idx++)
{
if (elf_num[idx] != 127 &&
	elf_num[idx] != 'E' &&
	elf_num[idx] != 'L' &&
	elf_num[idx] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}
/**
 * print_magc - Prints the magic numbers of ELF header.
 * @elf_num:an array of ELF magic numbers.
 */
void print_magc(unsigned char *elf_num)
{
int idx;

printf(" Magic: ");

for (idx = 0; idx < EI_NIDENT; idx++)
	{
printf("%02x", elf_num[idx]);

if (idx == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}
/**
 * print_class_of - Prints the class of an ELF header.
 * @elf_num: A pointer to an array containing the ELF class.
 */
void print_class_of(unsigned char *elf_num)
{
printf(" Class: ");

switch (elf_num[EI_CLASS])
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
printf("<unknown: %x>\n", elf_num[EI_CLASS]);
}
}

/**
 * print_data_of- Prints  data of  ELF header.
 * @elf_num: array containing the ELF class.
 */
void print_data_of(unsigned char *elf_num)
{
printf(" Data: ");

switch (elf_num[EI_DATA])
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
printf("<unknown: %x>\n", elf_num[EI_CLASS]);
}
}


/**
 * print_version_of - Print version of  ELF header.
 *@elf_num:array of the ELF version.
 */
void print_version_of(unsigned char *elf_num)
{
printf(" Version: %d", elf_num[EI_VERSION]);

switch (elf_num[EI_VERSION])
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
 * print_os_abi - Print OS/ABI of ELF header.
 * @elf_num:array containing the ELF version.
*/
void print_os_abi(unsigned char *elf_num)
{
printf(" OS/ABI: ");

switch (elf_num[EI_OSABI])
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
printf("<unknown: %x>\n", elf_num[EI_OSABI]);
}
}
/**
 * print_abi_- Print  ABI version of ELF header.
 * @elf_num:array of ELF ABI version.
*/
void print_abi_(unsigned char *elf_num)
{
printf(" ABI Version: %d\n",
elf_num[EI_ABIVERSION]);
}

/**
 * print_type_of- Prints type of ELF header.
 * @elf_type: ELF type.
* @elf_num:array of ELF class.
*/
void print_type_of(unsigned int elf_type, unsigned char *elf_num)
{
if (elf_num[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;

printf(" Type: ");

switch (e_type)
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
printf("<unknown: %x>\n", elf_type);
}
}

/**
 * print_entry_ - Prints  entry point of ELF header.
 * @elf_entry:  address of  ELF entry point.
 * @elf_num: array of ELF class.
*/
void print_entry_(unsigned long int elf_entry, unsigned char *elf_num)
{
printf(" Entry point address: ");

if (elf_num[EI_DATA] == ELFDATA2MSB)
{
elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
((elf_entry >> 8) & 0xFF00FF);
elf_entry = (elf_entry << 16) | (elf_entry >> 16);
}

if (elf_num[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)elf_entry);

else
printf("%#lx\n", elf_entry);
}
/**
 * close_elf_ - Closes ELF file.
 * @elfd: file descriptor of ELF file.
*/
void close_elf_(int elfd)
{
if (close(elfd) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", elfd);
exit(98);
}
}

/**
 * main - Displays the information at start of an ELF file.
 * @argc:number of arguments used in program.
 * @argv:array of pointers to the arguments.
 * Return: 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
Elf64_Ehdr *header;
int opent, readt;

opent = open(argv[1], O_RDONLY);
if (o == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf_(opent);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
readt = read(opent, header, sizeof(Elf64_Ehdr));
if (readt == -1)
{
free(header);
close_elf_(opent);
dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
exit(98);
}

check_elfnum(header->elf_num);
printf("ELF Header:\n");
print_magc(header->elf_num);
print_class_of(header->elf_num);
print_data_of(header->elf_num);
print_version_of(header->elf_num);
print_os_abi(header->elf_num);
print_abi_(header->elf_num);
print_type_of(header->elf_type, header->elf_num);
print_entry_(header->elf_entry, header->elf_num);

free(header);
close_elf_(o);
return (0);
}


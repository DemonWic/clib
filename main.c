/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agottlie <agottlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:22:05 by agottlie          #+#    #+#             */
/*   Updated: 2018/11/27 16:40:51 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memccpy.c"
#include "ft_memmove.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_strlen.c"
#include "ft_strdup.c"
#include "ft_strcpy.c"
#include "ft_strncpy.c"
#include "ft_strcat.c"
#include "ft_strncat.c"
#include "ft_strlcat.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strstr.c"
#include "ft_strnstr.c"
#include "ft_strcmp.c"
#include "ft_strncmp.c"
#include "ft_atoi.c"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_toupper.c"
#include "ft_tolower.c"

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);


int		main(void)
{

	putchar('\n');

	/* ============ FT_IS ============ */
	printf("FT_ISALPHA\n");
	{
		printf("\tTest 1 ");
		char	nbr1 = isalpha('1');
		char	nbr2 = ft_isalpha('1');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisalpha = %c\n\t\tft_isalpha = %c\n", nbr1, nbr2);

		printf("\tTest 2 ");
		nbr1 = isalpha(1);
		nbr2 = ft_isalpha(1);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisalpha = %c\n\t\tft_isalpha = %c\n", nbr1, nbr2);

		printf("\tTest 3 ");
		nbr1 = isalpha('a');
		nbr2 = ft_isalpha('a');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisalpha = %c\n\t\tft_isalpha = %c\n", nbr1, nbr2);
	}

	printf("FT_ISDIGIT\n");
	{
		printf("\tTest 1 ");
		int		nbr1 = isdigit('1');
		int		nbr2 = ft_isdigit('1');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisdigit = %d\n\t\tft_isdigit = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		nbr1 = isdigit(1);
		nbr2 = ft_isdigit(1);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisdigit = %d\n\t\tft_isdigit = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		nbr1 = isdigit('0');
		nbr2 = ft_isdigit('0');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisdigit = %d\n\t\tft_isdigit = %d\n", nbr1, nbr2);
	}

	printf("FT_ISALNUM\n");
	{
		printf("\tTest 1 ");
		char	nbr1 = isalnum(1);
		char	nbr2 = ft_isalnum(1);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisalnum = %d\n\t\tft_isalnum = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		nbr1 = isalnum('Z');
		nbr2 = ft_isalnum('Z');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisalnum = %d\n\t\tft_isalnum = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		nbr1 = isalnum('z');
		nbr2 = ft_isalnum('z');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisalnum = %d\n\t\tft_isalnum = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		nbr1 = isalnum('{');
		nbr2 = ft_isalnum('{');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisalnum = %d\n\t\tft_isalnum = %d\n", nbr1, nbr2);
	}

	printf("FT_ISASCII\n");
	{
		printf("\tTest 1 ");
		char	nbr1 = isascii(0);
		char	nbr2 = ft_isascii(0);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisascii = %d\n\t\tft_isascii = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		nbr1 = isascii('Z');
		nbr2 = ft_isascii('Z');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisascii = %d\n\t\tft_isascii = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		nbr1 = isascii(127);
		nbr2 = ft_isascii(127);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisascii = %d\n\t\tft_isascii = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		nbr1 = isascii(-1);
		nbr2 = ft_isascii(-1);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisascii = %d\n\t\tft_isascii = %d\n", nbr1, nbr2);
	}

	printf("FT_ISPRINT\n");
	{
		printf("\tTest 1 ");
		char	nbr1 = isprint(0);
		char	nbr2 = ft_isprint(0);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
		printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisprint = %d\n\t\tft_isprint = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		nbr1 = isprint(31);
		nbr2 = ft_isprint(31);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisprint = %d\n\t\tft_isprint = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		nbr1 = isprint(127);
		nbr2 = ft_isprint(127);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisprint = %d\n\t\tft_isprint = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		nbr1 = isprint(100);
		nbr2 = ft_isprint(100);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tisprint = %d\n\t\tft_isprint = %d\n", nbr1, nbr2);
	}

	printf("FT_TOUPPER\n");
	{
		printf("\tTest 1 ");
		char	nbr1 = toupper(0);
		char	nbr2 = ft_toupper(0);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\ttoupper = %d\n\t\tft_toupper = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		nbr1 = toupper('a');
		nbr2 = ft_toupper('a');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\ttoupper = %d\n\t\tft_toupper = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		nbr1 = toupper('A');
		nbr2 = ft_toupper('A');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\ttoupper = %d\n\t\tft_toupper = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		nbr1 = toupper(100);
		nbr2 = ft_toupper(100);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\ttoupper = %d\n\t\tft_toupper = %d\n", nbr1, nbr2);
	}

	printf("FT_TOLOWER\n");
	{
		printf("\tTest 1 ");
		char	nbr1 = tolower(0);
		char	nbr2 = ft_tolower(0);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\ttolower = %d\n\t\tft_tolower = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		nbr1 = tolower('a');
		nbr2 = ft_tolower('a');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\ttolower = %d\n\t\tft_tolower = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		nbr1 = tolower('A');
		nbr2 = ft_tolower('A');

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\ttolower = %d\n\t\tft_tolower = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		nbr1 = tolower(100);
		nbr2 = ft_tolower(100);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\ttolower = %d\n\t\tft_tolower = %d\n", nbr1, nbr2);
	}

	/* ============ FT_OTHER ============ */
	printf("FT_ATOI\n");
	{
		printf("\tTest 1 ");
		int		nbr1 = atoi("fd");
		int		nbr2 = ft_atoi("fd");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tatoi = %d\n\t\tft_atoi = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		nbr1 = atoi("a3");
		nbr2 = ft_atoi("a3");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tatoi = %d\n\t\tft_atoi = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		nbr1 = atoi("  		5A");
		nbr2 = ft_atoi("  		5A");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tatoi = %d\n\t\tft_atoi = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		nbr1 = atoi("+-42");
		nbr2 = ft_atoi("+-42");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tatoi = %d\n\t\tft_atoi = %d\n", nbr1, nbr2);

		printf("\tTest 5 ");
		nbr1 = atoi("-+42");
		nbr2 = ft_atoi("-+42");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tatoi = %d\n\t\tft_atoi = %d\n", nbr1, nbr2);

		printf("\tTest 6 ");
		nbr1 = atoi("-42");
		nbr2 = ft_atoi("-42");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tatoi = %d\n\t\tft_atoi = %d\n", nbr1, nbr2);

		printf("\tTest 7 ");
		nbr1 = atoi("--42");
		nbr2 = ft_atoi("--42");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tatoi = %d\n\t\tft_atoi = %d\n", nbr1, nbr2);

		printf("\tTest 8 ");
		nbr1 = atoi("++42");
		nbr2 = ft_atoi("++42");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tatoi = %d\n\t\tft_atoi = %d\n", nbr1, nbr2);

		printf("\tTest 9 ");
		nbr1 = atoi("-4278978787897987");
		nbr2 = ft_atoi("-4278978787897987");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tatoi = %d\n\t\tft_atoi = %d\n", nbr1, nbr2);
	}

	/* ============ FT_MEM ============ */

	printf("FT_MEMSET\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "hello";

		char	*nbr1 = memset(data1, '2', 5);
		char	*nbr2 = ft_memset(data2, '2', 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemset = %s\n\t\tft_memset = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data3[] = "how are u?";
		char	data4[] = "how are u?";

		nbr1 = memset(data3, '\n', 9);
		nbr2 = ft_memset(data4, '\n', 9);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemset = %s\n\t\tft_memset = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data5[20];
		char	data6[20];

		nbr1 = memset(data5, '\0', 20);
		nbr2 = ft_memset(data6, '\0', 20);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemset = %s\n\t\tft_memset = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data7[] = "";
		char	data8[] = "";

		nbr1 = memset(data7, '2', 0);
		nbr2 = ft_memset(data8, '2', 0);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemset = %s\n\t\tft_memset = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data9[] = "h1";
		char	data10[] = "h1";

		nbr1 = memset(data9, '2', 1);
		nbr2 = ft_memset(data10, '2', 1);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemset = %s\n\t\tft_memset = %s\n", nbr1, nbr2);
	}

	printf("FT_BZERO\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "hello";

		bzero(data1, 5);
		ft_bzero(data2, 5);
		(strcmp(data1, data2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tbzero = %s\n\t\tft_bzero = %s\n", data1, data2);

		printf("\tTest 2 ");
		char	data3[] = "how are u?";
		char	data4[] = "how are u?";

		bzero(data3, 9);
		ft_bzero(data4, 9);
		(strcmp(data3, data4) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tbzero = %s\n\t\tft_bzero = %s\n", data3, data4);

		printf("\tTest 3 ");
		char	data5[20];
		char	data6[20];

		bzero(data5, 20);
		ft_bzero(data6, 20);
		(strcmp(data5, data6) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tbzero = %s\n\t\tft_bzero = %s\n", data5, data6);

		printf("\tTest 4 ");
		char	data7[] = "";
		char	data8[] = "";

		bzero(data7, 0);
		ft_bzero(data8, 0);
		(strcmp(data7, data8) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tbzero = %s\n\t\tft_bzero = %s\n", data7, data8);

		printf("\tTest 5 ");
		char	data9[] = "h1";
		char	data10[] = "h1";

		bzero(data9, 1);
		ft_bzero(data10, 1);
		(strcmp(data9, data10) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tbzero = %s\n\t\tft_bzero = %s\n", data9, data10);
	}

	printf("FT_MEMCPY\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "how are u?";
		char	data3[20] = "hello";
		char	data4[20] = "how are u?";

		char	*nbr1 = memcpy(data1, data2, 5);
		char	*nbr2 = ft_memcpy(data3, data4, 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcpy = %s\n\t\tft_memcpy = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data5[] = "how are u?";
		char	data6[] = "16";
		char	data7[] = "how are u?";
		char	data8[] = "16";

		nbr1 = memcpy(data5, data6, 1);
		nbr2 = ft_memcpy(data7, data8, 1);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcpy = %s\n\t\tft_memcpy = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data9[20];
		char	data10[20];
		char	data11[20];
		char	data12[20];

		nbr1 = memcpy(data9, data10, 5);
		nbr2 = ft_memcpy(data11, data12, 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcpy = %s\n\t\tft_memcpy = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data13[] = "hello";
		char	data14[] = "";
		char	data15[] = "hello";
		char	data16[] = "";

		nbr1 = memcpy(data13, data14, 6);
		nbr2 = ft_memcpy(data15, data16, 6);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcpy = %s\n\t\tft_memcpy = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char data17[4] = "3";
		char data18[] = "hello";
		char data19[4] = "3";
		char data20[] = "hello";

		nbr1 = memcpy(data17, data18, 2);
		nbr2 = ft_memcpy(data19, data20, 2);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
		printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcpy = %s\n\t\tft_memcpy = %s\n", nbr1, nbr2);
	}

	printf("FT_MEMCCPY\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "how are u?";
		char	data3[20] = "hello";
		char	data4[20] = "how are u?";

		char	*nbr1 = memccpy(data1, data2, 'a', 5);
		char	*nbr2 = ft_memccpy(data3, data4, 'a', 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemccpy = %s\n\t\tft_memccpy = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data13[] = "hello";
		char	data14[] = "";
		char	data15[] = "hello";
		char	data16[] = "";

		nbr1 = memccpy(data13, data14, 0, 5);
		nbr2 = ft_memccpy(data15, data16, 0, 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemccpy = %s\n\t\tft_memccpy = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data17[7] = "hel";
		char	data18[] = "hello";
		char	data19[7] = "hel";
		char	data20[] = "hello";

		nbr1 = memccpy(data17, &data18[2], 'l', 7);
		nbr2 = ft_memccpy(data19, &data20[2], 'l', 7);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemccpy = %s\n\t\tft_memccpy = %s\n", nbr1, nbr2);
	}

	printf("FT_MEMMOVE\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "how are u?";
		char	data3[20] = "hello";
		char	data4[20] = "how are u?";

		char	*nbr1 = memmove(data1, data2, 5);
		char	*nbr2 = ft_memmove(data3, data4, 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemmove = %s\n\t\tft_memmove = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data5[] = "hello";
		char	data6[] = "";
		char	data7[] = "hello";
		char	data8[] = "";

		nbr1 = memmove(data5, data6, 5);
		nbr2 = ft_memmove(data7, data8, 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemmove = %s\n\t\tft_memmove = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data9[7] = "hel";
		char	data10[] = "hello";
		char	data11[7] = "hel";
		char	data12[] = "hello";

		nbr1 = memmove(data9, &data10[2], 7);
		nbr2 = ft_memmove(data11, &data12[2], 7);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemmove = %s\n\t\tft_memmove = %s\n", nbr1, nbr2);
	}

	printf("FT_MEMCHR\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "hello";

		char	*nbr1 = memchr(data1, 'l', 4);
		char	*nbr2 = ft_memchr(data2, 'l', 4);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemchr = %s\n\t\tft_memchr = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data3[] = "how are u?";
		char	data4[] = "how are u?";

		nbr1 = memchr(data3, 'w', 5);
		nbr2 = ft_memchr(data4, 'w', 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemchr = %s\n\t\tft_memchr = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data5[1] = "\0";
		char	data6[1] = "\0";

		nbr1 = memchr(data5, '\0', 1);
		nbr2 = ft_memchr(data6, '\0', 1);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemchr = %s\n\t\tft_memchr = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data7[] = "h";
		char	data8[] = "h";

		nbr1 = memchr(data7, 'h', 1);
		nbr2 = ft_memchr(data8, 'h', 1);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemchr = %s\n\t\tft_memchr = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data9[] = "h1";
		char	data10[] = "h1";

		nbr1 = memchr(data9, '1', 5);
		nbr2 = ft_memchr(data10, '1', 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemchr = %s\n\t\tft_memchr = %s\n", nbr1, nbr2);
	}

	printf("FT_MEMCMP\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "hello";

		int		nbr1;
		int		nbr2;

		nbr1 = memcmp(data1, data2, 5);
		nbr2 = ft_memcmp(data1, data2, 5);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcmp = %d\n\t\tft_memcmp = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data3[] = "how are u?";
		char	data4[] = "how are u?";

		nbr1 = memcmp(data3, data4, 9);
		nbr2 = ft_memcmp(data3, data4, 9);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcmp = %d\n\t\tft_memcmp = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data5[20];
		char	data6[20];

		nbr1 = memcmp(data5, data6, 20);
		nbr2 = ft_memcmp(data5, data6, 20);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcmp = %d\n\t\tft_memcmp = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data7[] = "";
		char	data8[] = "";

		nbr1 = memcmp(data7, data8, 10);
		nbr2 = ft_memcmp(data7, data8, 10);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcmp = %d\n\t\tft_memcmp = %d\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data9[] = "h1";
		char	data10[] = "h1";

		nbr1 = memcmp(data9, data10, 1);
		nbr2 = ft_memcmp(data9, data10, 1);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tmemcmp = %d\n\t\tft_memcmp = %d\n", nbr1, nbr2);
	}

	/* ============ FT_STR ============ */
	printf("FT_STRLEN\n");
	{
		printf("\tTest 1 ");
		int		nbr1 = strlen("fd");
		int		nbr2 = ft_strlen("fd");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrlen = %d\n\t\tft_strlen = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		nbr1 = strlen("a3");
		nbr2 = ft_strlen("a3");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrlen = %d\n\t\tft_strlen = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		nbr1 = strlen("  		5A");
		nbr2 = ft_strlen("  		5A");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrlen = %d\n\t\tft_strlen = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		nbr1 = strlen("+-						42");
		nbr2 = ft_strlen("+-						42");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrlen = %d\n\t\tft_strlen = %d\n", nbr1, nbr2);

		printf("\tTest 5 ");
		nbr1 = strlen("-+=/*-++-*/=42");
		nbr2 = ft_strlen("-+=/*-++-*/=42");

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrlen = %d\n\t\tft_strlen = %d\n", nbr1, nbr2);
	}

	printf("FT_STRDUP\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";

		char	*nbr1 = strdup(data1);
		char	*nbr2 = ft_strdup(data1);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrdup = %s\n\t\tft_strdup = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data2[] = "how are u?";

		nbr1 = strdup(data2);
		nbr2 = ft_strdup(data2);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrdup = %s\n\t\tft_strdup = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data3[20];

		nbr1 = strdup(data3);
		nbr2 = ft_strdup(data3);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrdup = %s\n\t\tft_strdup = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data4[] = "";

		nbr1 = strdup(data4);
		nbr2 = ft_strdup(data4);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrdup = %s\n\t\tft_strdup = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data5[] = "h1";

		nbr1 = strdup(data5);
		nbr2 = ft_strdup(data5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrdup = %s\n\t\tft_strdup = %s\n", nbr1, nbr2);
	}

	printf("FT_STRCPY\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "hello";

		char	*nbr1;
		char	*nbr2;

		nbr1 = strcpy(data1, data2);
		nbr2 = ft_strcpy(data1, data2);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data3[] = "how are u?";
		char	data4[] = "how are u?";

		nbr1 = strcpy(data3, data4);
		nbr2 = ft_strcpy(data3, data4);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data5[20];
		char	data6[20];

		nbr1 = strcpy(data5, data6);
		nbr2 = ft_strcpy(data5, data6);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data7[] = "";
		char	data8[] = "";

		nbr1 = strcpy(data7, data8);
		nbr2 = ft_strcpy(data7, data8);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data9[] = "h1";
		char	data10[] = "h1";

		nbr1 = strcpy(data9, data10);
		nbr2 = ft_strcpy(data9, data10);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);
	}

	printf("FT_STRCPY\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "hello";

		char	*nbr1;
		char	*nbr2;

		nbr1 = strcpy(data1, data2);
		nbr2 = ft_strcpy(data1, data2);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data3[] = "how are u?";
		char	data4[] = "how are u?";

		nbr1 = strcpy(data3, data4);
		nbr2 = ft_strcpy(data3, data4);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data5[20];
		char	data6[20];

		nbr1 = strcpy(data5, data6);
		nbr2 = ft_strcpy(data5, data6);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data7[] = "";
		char	data8[] = "";

		nbr1 = strcpy(data7, data8);
		nbr2 = ft_strcpy(data7, data8);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data9[] = "h1";
		char	data10[] = "h1";

		strcpy(data9, data10);
		ft_strcpy(data9, data10);
		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcpy = %s\n\t\tft_strcpy = %s\n", nbr1, nbr2);
	}

	printf("FT_STRNCPY\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "how are u?";
		char	data3[20] = "hello";
		char	data4[20] = "how are u?";

		char	*nbr1 = strncpy(data1, data2, 5);
		char	*nbr2 = ft_strncpy(data3, data4, 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncpy = %s\n\t\tft_strncpy = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data5[] = "how are u?";
		char	data6[] = "16";
		char	data7[] = "how are u?";
		char	data8[] = "16";

		nbr1 = strncpy(data5, data6, 1);
		nbr2 = ft_strncpy(data7, data8, 1);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncpy = %s\n\t\tft_strncpy = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data9[20];
		char	data10[20];
		char	data11[20];
		char	data12[20];

		nbr1 = strncpy(data9, data10, 5);
		nbr2 = ft_strncpy(data11, data12, 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncpy = %s\n\t\tft_strncpy = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data13[] = "hello";
		char	data14[] = "";
		char	data15[] = "hello";
		char	data16[] = "";

		nbr1 = strncpy(data13, data14, 6);
		nbr2 = ft_strncpy(data15, data16, 6);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncpy = %s\n\t\tft_strncpy = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char data17[4] = "";
		char data18[] = "hello";
		char data19[4] = "";
		char data20[] = "hello";

		nbr1 = strncpy(data17, data18, 2);
		nbr2 = ft_strncpy(data19, data20, 2);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncpy = %s\n\t\tft_strncpy = %s\n", nbr1, nbr2);
	}

	printf("FT_STRCAT\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "how are u?";
		char	data3[20] = "hello";
		char	data4[20] = "how are u?";

		char	*nbr1 = strcat(data1, data2);
		char	*nbr2 = ft_strcat(data3, data4);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcat = %s\n\t\tft_strcat = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data5[13] = "how are u?";
		char	data6[] = "16";
		char	data7[13] = "how are u?";
		char	data8[] = "16";

		nbr1 = strcat(data5, data6);
		nbr2 = ft_strcat(data7, data8);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcat = %s\n\t\tft_strcat = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data9[20];
		char	data10[20];
		char	data11[20];
		char	data12[20];

		nbr1 = strcat(data9, data10);
		nbr2 = ft_strcat(data11, data12);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcat = %s\n\t\tft_strcat = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data13[] = "hello";
		char	data14[] = "";
		char	data15[] = "hello";
		char	data16[] = "";

		nbr1 = strcat(data13, data14);
		nbr2 = ft_strcat(data15, data16);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcat = %s\n\t\tft_strcat = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char data17[6] = "";
		char data18[] = "hello";
		char data19[6] = "";
		char data20[] = "hello";

		nbr1 = strcat(data17, data18);
		nbr2 = ft_strcat(data19, data20);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcat = %s\n\t\tft_strcat = %s\n", nbr1, nbr2);
	}

	printf("FT_STRNCAT\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "how are u?";
		char	data3[20] = "hello";
		char	data4[20] = "how are u?";

		char	*nbr1 = strncat(data1, data2, 5);
		char	*nbr2 = ft_strncat(data3, data4, 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s\n\t\tft_strncat = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data5[13] = "how are u?";
		char	data6[] = "16";
		char	data7[13] = "how are u?";
		char	data8[] = "16";

		nbr1 = strncat(data5, data6, 0);
		nbr2 = ft_strncat(data7, data8, 0);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s\n\t\tft_strncat = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data9[20];
		char	data10[20];
		char	data11[20];
		char	data12[20];

		nbr1 = strncat(data9, data10, 10);
		nbr2 = ft_strncat(data11, data12, 10);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s\n\t\tft_strncat = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data13[] = "hello";
		char	data14[] = "";
		char	data15[] = "hello";
		char	data16[] = "";

		nbr1 = ft_strncat(data13, data14, 3);
		nbr2 = strncat(data15, data16, 3);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s\n\t\tft_strncat = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char data17[6] = "";
		char data18[] = "hello";
		char data19[6] = "";
		char data20[] = "hello";

		nbr1 = strncat(data17, data18, 5);
		nbr2 = ft_strncat(data19, data20, 5);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s\n\t\tft_strncat = %s\n", nbr1, nbr2);
	}

	printf("FT_STRLCAT\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";
		char	data2[20] = "how are u?";
		char	data3[20] = "hello";
		char	data4[20] = "how are u?";

		size_t	nbr1 = strlcat(data1, data2, 5);
		size_t	nbr2 = ft_strlcat(data3, data4, 5);
		(strcmp(data1, data3) == 0 && nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s, %zu\n\t\tft_strncat = %s, %zu\n", data1, nbr1, data3, nbr2);

		printf("\tTest 2 ");
		char	data5[13] = "how are u?";
		char	data6[] = "16";
		char	data7[13] = "how are u?";
		char	data8[] = "16";

		nbr1 = strlcat(data1, data2, 5);
		nbr2 = ft_strlcat(data3, data4, 5);
		(strcmp(data5, data7) == 0 && nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s, %zu\n\t\tft_strncat = %s, %zu\n", data5, nbr1, data7, nbr2);

		printf("\tTest 3 ");
		char	data9[13] = "how are u?";
		char	data10[] = "16";
		char	data11[13] = "how are u?";
		char	data12[] = "16";

		nbr1 = strlcat(data1, data2, 5);
		nbr2 = ft_strlcat(data3, data4, 5);
		(strcmp(data9, data11) == 0 && nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s, %zu\n\t\tft_strncat = %s, %zu\n", data9, nbr1, data11, nbr2);

		printf("\tTest 4 ");
		char	data13[13] = "how are u?";
		char	data14[] = "16";
		char	data15[13] = "how are u?";
		char	data16[] = "16";

		nbr1 = strlcat(data1, data2, 5);
		nbr2 = ft_strlcat(data3, data4, 5);
		(strcmp(data13, data15) == 0 && nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s, %zu\n\t\tft_strncat = %s, %zu\n", data13, nbr1, data15, nbr2);

		printf("\tTest 5 ");
		char	data17[13] = "how are u?";
		char	data18[] = "16";
		char	data19[13] = "how are u?";
		char	data20[] = "16";

		nbr1 = strlcat(data1, data2, 5);
		nbr2 = ft_strlcat(data3, data4, 5);
		(strcmp(data17, data19) == 0 && nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncat = %s, %zu\n\t\tft_strncat = %s, %zu\n", data17, nbr1, data19, nbr2);
	}

	printf("FT_STRCHR\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello";

		char	*nbr1;
		char	*nbr2;

		nbr1 = strchr(data1, 'l');
		nbr2 = ft_strchr(data1, 'l');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrchr = %s\n\t\tft_strchr = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data2[] = "how are u?";

		nbr1 = strchr(data2, '?');
		nbr2 = ft_strchr(data2, '?');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrchr = %s\n\t\tft_strchr = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data3[20] = "5";

		nbr1 = strchr(data3, '5');
		nbr2 = ft_strchr(data3, '5');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrchr = %s\n\t\tft_strchr = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data4[] = "\nh\0";

		nbr1 = strchr(data4, 'h');
		nbr2 = ft_strchr(data4, 'h');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrchr = %s\n\t\tft_strchr = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data5[] = "h1";

		nbr1 = strchr(data5, '1');
		nbr2 = ft_strchr(data5, '1');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrchr = %s\n\t\tft_strchr = %s\n", nbr1, nbr2);
	}

	printf("FT_STRRCHR\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello how are ul?";

		char	*nbr1;
		char	*nbr2;

		nbr1 = strrchr(data1, 'l');
		nbr2 = ft_strrchr(data1, 'l');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrrchr = %s\n\t\tft_strrchr = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data2[] = "how are u?";

		nbr1 = strrchr(data2, 'u');
		nbr2 = ft_strrchr(data2, 'u');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrrchr = %s\n\t\tft_strrchr = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data3[20] = "data";

		nbr1 = strrchr(data3, 'a');
		nbr2 = ft_strrchr(data3, 'a');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrrchr = %s\n\t\tft_strrchr = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data4[] = "d";

		nbr1 = strrchr(data4, '\0');
		nbr2 = ft_strrchr(data4, '\0');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrrchr = %s\n\t\tft_strrchr = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data5[5] = "11111";

		nbr1 = strrchr(data5, '1');
		nbr2 = ft_strrchr(data5, '1');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrrchr = %s\n\t\tft_strrchr = %s\n", nbr1, nbr2);

		printf("\tTest 6 ");
		char	data6[] = "h1";

		nbr1 = strrchr(data6, '1');
		nbr2 = ft_strrchr(data6, '1');
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrrchr = %s\n\t\tft_strrchr = %s\n", nbr1, nbr2);
	}

/*	printf("FT_STRSTR\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello how are ul?";

		char	*nbr1;
		char	*nbr2;

		nbr1 = strstr(data1, "are");
		nbr2 = ft_strstr(data1, "are");
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrstr = %s\n\t\tft_strstr = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data2[] = "how are u?";

		nbr1 = strstr(data2, "?");
		nbr2 = ft_strstr(data2, "?");
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrstr = %s\n\t\tft_strstr = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data3[20];

		nbr1 = strstr(data3, "\0");
		nbr2 = ft_strstr(data3, "\0");
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrstr = %s\n\t\tft_strstr = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data4[] = "";

		nbr1 = strstr(data4, "\0");
		nbr2 = ft_strstr(data4, "\0");
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrstr = %s\n\t\tft_strstr = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data5[] = "11111";

		nbr1 = strstr(data5, "1");
		nbr2 = ft_strstr(data5, "1");
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrstr = %s\n\t\tft_strstr = %s\n", nbr1, nbr2);

		printf("\tTest 6 ");
		char	data6[] = "1";

		nbr1 = strstr(data6, "1");
		nbr2 = ft_strstr(data6, "1");
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrstr = %s\n\t\tft_strstr = %s\n", nbr1, nbr2);
	}

	printf("FT_STRNSTR\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello how are ul?";

		char	*nbr1;
		char	*nbr2;

		nbr1 = strnstr(data1, "are", 13);
		nbr2 = ft_strnstr(data1, "are", 13);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrnstr = %s\n\t\tft_strnstr = %s\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data2[] = "how are u?";

		nbr1 = strnstr(data2, "?", 15);
		nbr2 = ft_strnstr(data2, "?", 15);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrnstr = %s\n\t\tft_strnstr = %s\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data3[20];

		nbr1 = strnstr(data3, "\0", 1);
		nbr2 = ft_strnstr(data3, "\0", 1);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrnstr = %s\n\t\tft_strnstr = %s\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data4[] = "";

		nbr1 = strnstr(data4, "\0", 1);
		nbr2 = ft_strnstr(data4, "\0", 1);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrnstr = %s\n\t\tft_strnstr = %s\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data5[] = "11111";

		nbr1 = strnstr(data5, "1", 1);
		nbr2 = ft_strnstr(data5, "1", 1);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrnstr = %s\n\t\tft_strnstr = %s\n", nbr1, nbr2);

		printf("\tTest 6 ");
		char	data6[] = "1";

		nbr1 = strnstr(data6, "1", 50);
		nbr2 = ft_strnstr(data6, "1", 50);
		(strcmp(nbr1, nbr2) == 0) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrnstr = %s\n\t\tft_strnstr = %s\n", nbr1, nbr2);
	}*/

	printf("FT_STRCMP\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello how are ul?";
		char	data2[20] = "-";

		int		nbr1 = strcmp(data1, data2);
		int		nbr2 = ft_strcmp(data1, data2);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcmp = %d\n\t\tft_strcmp = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data3[20] = "";
		char	data4[20] = "-";

		nbr1 = strcmp(data3, data4);
		nbr2 = ft_strcmp(data3, data4);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcmp = %d\n\t\tft_strcmp = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data5[20] = "-";
		char	data6[20] = "";

		nbr1 = strcmp(data5, data6);
		nbr2 = ft_strcmp(data5, data6);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcmp = %d\n\t\tft_strcmp = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data7[20] = "123456789\n";
		char	data8[20] = "123456789\n";

		nbr1 = strcmp(data7, data8);
		nbr2 = ft_strcmp(data7, data8);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcmp = %d\n\t\tft_strcmp = %d\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data9[20] = "\n";
		char	data10[20] = "\t";

		nbr1 = strcmp(data9, data10);
		nbr2 = ft_strcmp(data9, data10);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcmp = %d\n\t\tft_strcmp = %d\n", nbr1, nbr2);

		printf("\tTest 6 ");
		char	data11[20] = "";
		char	data12[20] = "";

		nbr1 = strcmp(data11, data12);
		nbr2 = ft_strcmp(data11, data12);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrcmp = %d\n\t\tft_strcmp = %d\n", nbr1, nbr2);
	}

	printf("FT_STRNCMP\n");
	{
		printf("\tTest 1 ");
		char	data1[20] = "hello how are ul?";
		char	data2[20] = "-";

		int		nbr1 = strncmp(data1, data2, 1);
		int		nbr2 = ft_strncmp(data1, data2, 1);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncmp = %d\n\t\tft_strncmp = %d\n", nbr1, nbr2);

		printf("\tTest 2 ");
		char	data3[20] = "";
		char	data4[20] = "";

		nbr1 = strncmp(data3, data4, 10);
		nbr2 = ft_strncmp(data3, data4, 10);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncmp = %d\n\t\tft_strncmp = %d\n", nbr1, nbr2);

		printf("\tTest 3 ");
		char	data5[20] = "     5";
		char	data6[20] = "      5";

		nbr1 = strncmp(data5, data6, 2);
		nbr2 = ft_strncmp(data5, data6, 2);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncmp = %d\n\t\tft_strncmp = %d\n", nbr1, nbr2);

		printf("\tTest 4 ");
		char	data7[20] = "123456789\t\n\b";
		char	data8[20] = "123456789\t\n\t";

		nbr1 = strncmp(data7, data8, 20);
		nbr2 = ft_strncmp(data7, data8, 20);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncmp = %d\n\t\tft_strncmp = %d\n", nbr1, nbr2);

		printf("\tTest 5 ");
		char	data9[20] = "\n";
		char	data10[20] = "\t";

		nbr1 = strncmp(data9, data10, 5);
		nbr2 = ft_strncmp(data9, data10, 5);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncmp = %d\n\t\tft_strncmp = %d\n", nbr1, nbr2);

		printf("\tTest 6 ");
		char	data11[20] = "\0";
		char	data12[20] = "\0";

		nbr1 = strncmp(data11, data12, 100);
		nbr2 = ft_strncmp(data11, data12, 100);

		(nbr1 == nbr2) ? printf("- \x1b[32;1m[GOOD]\x1b[0m\n") :
			printf("- \x1b[31;1m[NOT GOOD]\x1b[0m\n\t\tstrncmp = %d\n\t\tft_strncmp = %d\n", nbr1, nbr2);
	}
}

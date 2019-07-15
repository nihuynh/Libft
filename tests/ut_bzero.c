#include <unistd.h>
#include <strings.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

_Bool fail = 0;

static void test1() {
    // Assign
    char t1[] = "Hello, world!";
    char r1[] = "Hello, world!";

    // Act
    ft_bzero(t1, 14);
    bzero(r1, 14);

    // Assert
    if (memcmp(t1, r1, 14)) {
        fail = 1;
        fprintf(stderr, "FAIL: ft_bzero test 1\n");
    }
}

static void test2() {
    // Assign
    char t1[] = "Hello, world!";
    char r1[] = "Hello, world!";

    // Act
    ft_bzero(t1 + 3, 11);
    bzero(r1 + 3, 11);

    // Assert
    if (memcmp(t1, r1, 14)) {
        fail = 1;
        fprintf(stderr, "FAIL: ft_bzero test 2\n");
    }
}

static void test3() {
    // Assign
    char t1[] = "Hello, world!";
    char r1[] = "Hello, world!";

    // Act
    ft_bzero(t1, 2);
    bzero(r1, 2);

    // Assert
    if (memcmp(t1, r1, 14)) {
        fail = 1;
        fprintf(stderr, "FAIL: ft_bzero test 3\n");
    }
}

static void test4() {
    // Assign
    char t1[] = "Hello, world!";
    char r1[] = "Hello, world!";

    // Act
    ft_bzero(t1, 13);
    bzero(r1, 13);

    // Assert
    if (memcmp(t1, r1, 14)) {
        fail = 1;
        fprintf(stderr, "FAIL: ft_bzero test 4\n");
    }
}

static void test5() {
    // Assign
    char t1[] = "Hello, world!";
    char r1[] = "Hello, world!";

    // Act
    ft_bzero(t1, 0);
    bzero(r1, (0));

    // Assert
    if (memcmp(t1, r1, 14)) {
        fail = 1;
        fprintf(stderr, "FAIL: ft_bzero test 5\n");
    }
}

static void test6() {
    // Assign
    char t1[] = "Hello, world!Hello, world!";
    char r1[] = "Hello, world!Hello, world!";

    // Act
    ft_bzero(t1, 27);
    bzero(r1, 27);

    // Assert
    if (memcmp(t1, r1, 27)) {
        fail = 1;
        fprintf(stderr, "FAIL: ft_bzero test 6\n");
    }
}

int test_result() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();

    if (!fail)
        printf("PASS: ft_bzero\n");
    return 0;
}

void	test_speed(void *ptr, size_t len, void (*func) (void *, size_t))
{
	long	elapsed_timer;
	int		idx;

	idx = 1000000;
	elapsed_timer = ft_curr_usec();
	while (idx > 0)
	{
		func(ptr, len);
		idx--;
	}
	printf("it took : %.3f Ms\n", (float)(ft_curr_usec() -  elapsed_timer) / 1000.0f);
}

int		main(void)
{
	char	data[1024];

	test_result();
	test_speed(&data, sizeof(data), &ft_bzero);
	test_speed(&data, sizeof(data), &bzero);
	return (0);
}

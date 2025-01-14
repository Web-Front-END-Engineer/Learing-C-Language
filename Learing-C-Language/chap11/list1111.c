/*--- 使用strcmp函数的例子 ---*/
int strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2) {
		if (*s1 == '\0')
			return 0;								/* 相等 */
		s1++;
		s2++;
	}

	return (unsigned char)*s1 - (unsigned char)*s2;
}

/*--- 使用strncmp函数的例子 ---*/
int strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s2) {
		if (*s1 != *s2)								/* 不相等 */
			return (unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
		n--;
	}
	if (!n)  return 0;								/* 相等 */
	if (*s1) return 1;								/* s1 > s2 */

	return -1;										/* s1 < s2 */
}

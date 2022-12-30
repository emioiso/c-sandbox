// atcoder_abc154_B - I miss you...のまとめ
// 理解したこと
// for文の条件式の部分は比較演算子を使わなくてもループしてくれる。

#include <stdio.h>

int	main(void)
{

	char s[101];

	scanf("%s",s);
	printf("%s\n",s);

	for (int i = 0; s[i]; i++)
	{
		s[i] = 'x';
	}
	printf("%s\n", s);

	return (0);
}

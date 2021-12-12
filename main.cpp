#include <iostream>

#define z186deb3bb2 
#define z048b31e7a8( z2f71b44db2, zc1c28ca67f)  ( ( z2f71b44db2) > ( zc1c28ca67f) ? ( zc1c28ca67f) : ( z2f71b44db2) )  
#define zb69998dcc6 
int z1c0ab7cf0c, z8c8f7c7867, za862d19cbc= (0x6d8+5427-0x1bbb);

#include <string.h>
#include <array>
#include <random>
#include <ctime>

/*
 Некоторые рыбы, например, белая акула, могут поднимать температуру собственного тела, 
 чтобы охотиться в холодной воде.
 */

std::string generator(std::string k, int l)
{
	std::string s = "";
	for(int i = 0; i < l; i++)
	{
		s.push_back(k[0]);
	}

	s+=k;
	return s;
};

void cpp_to_c(char* s, std::string str)
{
	int length = str.length();
    	for(int i = 0; i < length; i++)
    	{
        	s[i] = str[i];
    	}
}

bool cmp(char* o_ab400a34842caf1e7294fec779c0177b,char* o_4d0844e01c0c4376f651417c6d2145de){bool o_a813bb0301847aef3344e98df7ed7228=(0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 - 0x0000000000000A03);for (int o_4f095104f207e0f8d0beadae1b523d0c=(0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);(o_4f095104f207e0f8d0beadae1b523d0c < (0x0000000000000064 + 0x0000000000000232 + 0x0000000000000832 - 0x0000000000000A96)) & !!(o_4f095104f207e0f8d0beadae1b523d0c < (0x0000000000000064 + 0x0000000000000232 + 0x0000000000000832 - 0x0000000000000A96));o_4f095104f207e0f8d0beadae1b523d0c++){if (o_ab400a34842caf1e7294fec779c0177b[o_4f095104f207e0f8d0beadae1b523d0c] != o_4d0844e01c0c4376f651417c6d2145de[o_4f095104f207e0f8d0beadae1b523d0c]){o_a813bb0301847aef3344e98df7ed7228 = (0x0000000000000000 + 0x0000000000000200 + 0x0000000000000800 - 0x0000000000000A00);break;};};return o_a813bb0301847aef3344e98df7ed7228;};

/*
 Парусник – самая быстрая рыба. При специальных испытаниях, 
 которые были проведены во Флориде, парусник преодолел 91 метр 
 за три секунды, то есть со скоростью 109 километров в час. 
 */

std::string generate(char* s, std::string s1, std::string s2)
{
	char str_s1[50] = "";
	cpp_to_c(str_s1, s1);

	unsigned char seeds[] = 
	{

	0x19, 0x8a, 0x4c, 0x5, 0xc4, 0x7f, 0xc2, 0x7d, 
	0xc1, 0xbd, 0x6d, 0xf0, 0xe9, 0xa7, 0x63, 0x9d, 
	0x89, 0x89, 0x40, 0x9b, 0xe5, 0x76, 0x4c, 0xed, 
	0xa4, 0x8b, 0x9e, 0x75, 0x25, 0xad, 0xf3, 0xb1, 
	0xd, 0x4a, 0xc, 0xca, 0xa0, 0xa9, 0xef, 0x3e, 
	0xf4, 0xaf, 0x74, 0x31, 0x66, 0x23, 0xf, 0x13, 
	0xb8, 0xef, 0x27, 0xa5, 0xab, 0x16, 0xa1, 0xcb, 
	0x1d, 0x55, 0x55, 0xd7, 0x5b, 0x2e, 0x8, 0x67
	};

	char str_s2[50] = "";
	cpp_to_c(str_s2, s2);

	int rand;

	if(s1.length() < 50)
	{
		for(int i = s1.length(); i < 50; i++)
		{
			//std::srand(std::time(nullptr));
			rand = std::rand();

			for (unsigned int m = 0; m < sizeof(seeds); ++m)
			{
				unsigned char c = seeds[m];
				c += m;
				c = -c;
				c -= m;
				c ^= m;
				c = ~c;
				c ^= 0x2f;
				c = ~c;
				c -= m;
				c = (c >> 0x7) | (c << 0x1);
				c ^= m;
				c += m;
				c = (c >> 0x7) | (c << 0x1);
				seeds[m] = c;	
			}

		s1.push_back(static_cast<char>(33 + rand % 93));

		}
	}
	else
	{	
		for (unsigned int m = 0; m < sizeof(seeds); ++m)
		{
   			unsigned char c = seeds[m];
			c = ~c;
			c += m;
    			c ^= 0xb1;
    			c += m;
    			c = (c >> 0x5) | (c << 0x3);
    			c = ~c;
    			c = -c;
    			c = ~c;
    			seeds[m] = c;
		}

		printf("%s\n", s);	
	}

	unsigned char seeds2[] = {

	0xb6, 0xb5, 0x68, 0x57, 0x88, 0x35, 0x9e, 0x83, 
	0xcc, 0x45, 0x20, 0xc1, 0x38, 0xff, 0x68, 0x1f, 
	0x90, 0x35, 0x30, 0xd1, 0xe4, 0xc1, 0x3c, 0xc9, 
	0x56, 0xcd, 0xde, 0xd7, 0xf2, 0x5d, 0x4c, 0x43, 
        0x4e, 0x95, 0x90, 0x4b, 0xbc, 0x7b, 0x92, 0x77, 
        0x5e, 0x5d, 0x60, 0x3f, 0x92, 0xb5, 0x30, 0x61, 
        0xa, 0xf, 0xe, 0xe1, 0x16, 0x13, 0xea, 0x1b, 
        0xe8, 0xe1, 0xe6, 0xf, 0x3c, 0x11, 0x12, 0x3, 
        0x12, 0xad, 0x88, 0xa5, 0x6, 0xfb, 0xd4
	};

	if(s2.length() < 50)
	{
		for(int i = s2.length(); i < 50; i++)
		{
			//std::srand(std::time(nullptr));
			rand = std::rand();

			for (unsigned int m = 0; m < sizeof(seeds2); ++m)
			{
				
				unsigned char c = seeds2[m];
				c ^= m;
				c += m;
				c ^= 0x1f;
				c = ~c;
				c = -c;
				c -= m;
				c ^= 0x6a;
				c = (c >> 0x1) | (c << 0x7);
				seeds2[m] = c;
				
			}

		s2.push_back(static_cast<char>(33 + rand % 93));
		
		}
	}
	else // Аравана способна выпрыгивать из воды, чтобы поймать добычу, такую как насекомые, птицы и летучие мыши.	
	{	
		for (unsigned int m = 0; m < sizeof(seeds2); ++m)
		{
   			unsigned char c = seeds2[m];
			c = ~c;
			c += m;
    			c ^= 0xb1;
    			c += m;
    			c = (c >> 0x5) | (c << 0x3);
    			c = ~c;
    			c = -c;
    			c = ~c;
    			seeds2[m] = c;
		}

		printf("%s\n", s);	
	}

	std::string kek;
	
	for(long unsigned int i = 0; i < sizeof(s); i++)
	{
		kek.push_back(static_cast<char>(33 + (static_cast<int>(s1[i]) + static_cast<int>(s2[i])) % 93));
	}
	return kek;

}

int main()
{
	char str[16] = "";
	std::string log, input;
	std::cout<<"\x4C""o\147i\x6E"":\040";
	std::cin >> log;

	std::string pass;
	std::cout << "\x45""n\164e\x72"" \160a\x73""s\167o\x72""d\072 ";
	std::cin >> pass;

	std::string key = generate(str, log, pass);
	std::cout << "Generated key: " << key << "\n";
	
	char str1[16] = "";
	cpp_to_c(str1, key);

	for(int i = 3; i > 0; i--)
	{
		char str2[16] = "";
		std::cout << "\x45""n\164e\x72"" \153e\x79"":\040";
		std::cin >> input;
	
		cpp_to_c(str2, input);	
	
		if(strcmp(str1, str2) == 0)
		{
			std::cout << "\x57""e\154c\x6F""m\145,\x20""u\163e\x72""!";
			break;
		}
		else
		{
			std::cout << "\x57""r\157n\x67"" \153e\x79"".\040A\x74""t\145m\x70""t\163 \x6C""e\146t\x3A"" "<<i - (0x0000000000000002 + 0x0000000000000201 + 0x0000000000000801 - 0x0000000000000A03)<<"\x0A""";
		}
	}
	
	return 0;
}

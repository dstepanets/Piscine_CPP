/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 14:19:22 by dstepane          #+#    #+#             */
/*   Updated: 2019/07/04 14:19:24 by dstepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void			dump_memory(void const *mem, size_t len)
{
	const unsigned char *p = reinterpret_cast<const unsigned char *>(mem);

	for (size_t i = 0; i < len; i++)
	{
		std::cout << std::hex << std::showbase << + p[i] << " ";
	}
	std::cout << std::endl;

}

Data *			deserialize(void *raw)
{
	Data		*data = new Data;
	int			*ptr;

	char *str = reinterpret_cast<char *>(raw);
	data->s1 = std::string(str, 8);	
	data->s2 = std::string(str + (8 + sizeof(int)), 8);
	ptr = reinterpret_cast<int *>(str + 8);
	data->n = *ptr;
	return (data);
}

void *			serialize(void)
{
	char	alphanum[63] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char	*sequence = new char [16 + sizeof(int)];

	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < 20; i++)
		sequence[i] = alphanum[rand() % 61];

	*reinterpret_cast<int *>(&sequence[8]) = rand();

	return (reinterpret_cast<void *>(sequence));

}

int				main(void)
{
	void	*ser;
	Data	*data;
	
	ser = serialize();
	std::cout << "Serialized sequence memory dump:" << std::endl;
	dump_memory(ser, 20);

	data = deserialize(ser);
	std::cout << "\nDeserialized data structure memory dump:" << std::endl;
	dump_memory(reinterpret_cast<void const *>(data->s1.c_str()), 8);
	unsigned char *c = reinterpret_cast<unsigned char *>(&data->n);
	dump_memory(reinterpret_cast<void const *>(c), sizeof(int));
	dump_memory(reinterpret_cast<void const *>(data->s2.c_str()), 8);

	std::cout << std::endl;
	std::cout << "Deserialized Data:\ns1:\t\"" << data->s1 << "\"" << std::endl;
	std::cout << std::dec << "int n:\t" << data->n << "\n";
	std::cout << "s2:\t\"" << data->s2 << "\"" << std::endl;

	unsigned char *s = reinterpret_cast<unsigned char *>(ser);
	delete s;
	delete data;

	return (0);
}

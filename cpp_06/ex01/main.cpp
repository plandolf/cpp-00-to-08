/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:16:51 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/09 17:39:00 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data myData;
    myData.value = 42;

    uintptr_t serialized = Serializer::serialize(&myData);
    Data* deserialized = Serializer::deserialize(serialized);

	std::cout << "Original value: " << myData.value << std::endl;
	std::cout << "Deserialized value: " << deserialized->value << std::endl;

    std::cout << "Original address: " << &myData << std::endl;
    std::cout << "Deserialized address: " << deserialized << std::endl;

    if (&myData == deserialized) {
        std::cout << "Success: The original and deserialized pointers are the same." << std::endl;
    } else {
        std::cout << "Error: The pointers do not match." << std::endl;
    }

    return 0;
}
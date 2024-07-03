/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:42:28 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/18 13:14:56 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <deque>
#include <list>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		//constructor
		MutantStack() : std::stack<T, Container>() {}
		//copy constructor
		MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}
		//assignment operator
		MutantStack<T, Container> &operator=(const MutantStack<T, Container> &other) {
			if (this != &other)
				std::stack<T, Container>::operator=(other);
			return *this;
		}
		//deconstructor
		~MutantStack() {}
		//begin iterator
		iterator begin() {
			return this->c.begin();
		}
		//end iterator
		iterator end() {
			return this->c.end();
		}
		//begin const iterator
		const_iterator begin() const {
			return this->c.begin();
		}
		//end const iterator
		const_iterator end() const {
			return this->c.end();
		}
		//reverse begin iterator
		reverse_iterator rbegin() {
			return this->c.rbegin();
		}
		//reverse end iterator
		reverse_iterator rend() {
			return this->c.rend();
		}
		//reverse begin const iterator
		const_reverse_iterator rbegin() const {
			return this->c.rbegin();
		}
		//reverse end const iterator
		const_reverse_iterator rend() const {
			return this->c.rend();
		}
		//back
		const T& back() const{
			return this->c.back();
		}
		
};
#endif
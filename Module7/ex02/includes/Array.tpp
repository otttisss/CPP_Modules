/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:22:30 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/06 19:14:42 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <iomanip>
# include <iostream>

template < typename T >

class Array
{
	private:
		T				*_tab;
		unsigned int	_size;

	public:
		Array (void) : _tab(new T[0]()), _size(0) {};
		Array (unsigned int size) : _tab(new T[size]()), _size(size) {std:: cout << "size: " << this->_size <<std::endl;};
		Array (const Array<T> &src) {*this = src;};
		~Array() {delete[] this->_tab;};
		
		Array<T> &operator=(Array<T> const &rhs)
		{
			if (this != &rhs)
			{
				this->_size = rhs._size;
				this->_tab = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_tab[i] = rhs._tab[i];
			}
			return (*this);
		};
		
		T &operator[](unsigned int index)
		{
			if (index < 0 || index >= this->_size)
				throw Array::AccessError();
			else
				return(this->_tab[index]);
		};
		
		unsigned int getSize(void) const {return (this->_size);};
		void	setValue(unsigned int index, T newValue)
		{
			if (index < 0 || index > this->_size)
				throw Array::AccessError();
			else
				this->_tab[index] = newValue;
		};
		
		class AccessError: public std::exception
		{
			virtual const char * what() const throw() {return (" Access Error");};
		};
		
};

#endif
#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename U>
void iter(T *arr, U length, void (*function)(T const &arrElem))
{
	for (U i = 0; i < length; i++)
		(*function)(arr[i]);
}
#endif
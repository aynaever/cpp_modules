/**
 * File              : helpers.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 15.04.2022
 * Last Modified Date: 15.04.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"helpers.hpp"

void	copy_to_str( std::string* str, char* file)
{
	int				length;
	std::ifstream	ifs;

	/* Openning the file in input mode */
	ifs.open (file, std::ifstream::in);

	/* getting the length of the file */
	ifs.seekg(0, ifs.end);
	length = ifs.tellg();
	ifs.seekg(0, ifs.beg);

	/* allocating the length of the file for buffer to copy file into it */
	if ( length == -1 )
	{
		throw -1;
		return ;
	}
	char* buff = new char[length];

	/* copy file to buffer and then assign it to string object */
	ifs.read (buff, length);
	str->assign(buff);

	/* free the buffer in the heap */
	delete [] buff;

	/* close the stream */
	ifs.close();
}

void	replace( std::string* str, std::string s1, std::string s2 )
{
	int	len1;
	int	index;
	int	pos;

	len1 = s1.size();
	pos  = 0;

	do {

		/* getting the index of the first occurence starting from pos */
		index = str->find(s1, pos);

		/* checking if there an occurence of s1 */
		if ( index == -1 )
			break;

		/* replace by first erasing the s1 and then inserting s2 */
		str->erase(index, len1);
		str->insert(index, s2);

		/* updating the pos */
		pos += index;

	} while ( index != -1 );
}

# Kata 9: UTF-8 Validation

-Problem
A character in UTF8 can be from 1 to 4 bytes long, subjected to the following rules:  
  
    For 1-byte character, the first bit is a 0, followed by its unicode code.
    For n-bytes character, the first n-bits are all one's, the n+1 bit is 0, followed by n-1 bytes with most significant 2 bits being 10.
  
This is how the UTF-8 encoding would work:  

   Char. number range  |        UTF-8 octet sequence        
   	  (hexadecimal)    |              (binary)       
   --------------------+--------------------------------------------------------------------------------------       
   0000 0000-0000 007F | 0xxxxxxx  		
   0000 0080-0000 07FF | 110xxxxx 10xxxxxx  
   0000 0800-0000 FFFF | 1110xxxx 10xxxxxx 10xxxxxx  
   0001 0000-0010 FFFF | 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx  
   
Given an array of integers representing the data, return whether it is a valid utf-8 encoding.  
  
Note:  
The input is an array of integers. Only the least significant 8 bits of each integer is used to store the data. This means each integer represents only 1 byte of data.  
  
Example 1:  
  
data = [197, 130, 1], which represents the octet sequence: 11000101 10000010 00000001.    Return true.  It is a valid utf-8 encoding for a 2-bytes character followed by a 1-byte character.  
  
Example 2:  
  
data = [235, 140, 4], which represented the octet sequence: 11101011 10001100 00000100.    Return false.  The first 3 bits are all one's and the 4th bit is 0 means it is a 3-bytes character.  The next byte is a continuation byte which starts with 10 and that's correct.  But the second continuation byte does not start with 10, so it is invalid.

-----------------------------------------------------------------------------------------------------
-Solution
--First
---We ask the user for an array of data to evaluate  
---Then we store this data on an array of int's named data  
---Once stored we use a loop to check every element of the array one by one  
---For every element on the array we transform their numeric value into it's binary value  
  
--Second  
---For the first element in the array we count their initial 1's of ther binary representation, since in UTF8 the characters can only be represented by 1-4 bytes the elements the only valid first number of 1's is:  
		0: 1 byte long  
		2: 2 bytes long  
		3: 3 bytes long  
		4: 4 bytes long  
		(if the first element doesn't have this characteristics this means it is not a valid utf-8 encoding)  
---For the following elements we have 2 choices:  
	The element was 1 byte long		or 		The element was 2-4 bytes long  
	--------------------------------+--------------------------------------------------  
	-We treat this element as       | -We expect the following n-1 elements (where n  
	if it was the first one 		| is the length of bytes of this character) to start  
	again							| whit 10, once this is donde we treat the next  
									| element as if it was the first one.  
---If any of this fails we return that the encoding is invalid 

--Third
---How to know if it's valid?
---If we reach the final element of the array whitout encountering any inconsistencies so far and this element happens to be the last element of a character (1 byte character or the last byte of a caracter). Then we return that it is a valid enconding.
---Otherwise we return invalid
--------------------------------------------------------------------------------------------
-Sample code for when the first bit of the character is different than 0
int validUtf8(vector<int>& data) {  
	int count = 0;    
    for (auto c : data) {    
        if (count == 0) {  							 //If count==0 this means we are checking the first element  

            if ((c >> 5) == 0b110) count = 1;        //the character is 2 bytes long (so we expect the next element to start   											 //with 10 or count=1)  

            else if ((c >> 4) == 0b1110) count = 2;  //the character is 3 bytes long (so we expect the next 2 elements to   											 //start with 10 or count=2)  

            else if ((c >> 3) == 0b11110) count = 3; //the character is 4 bytes long (so we expect the next 3 elements to   											 //start with 10 or count=3)  

            else if ((c >> 7)) return 0;  			 //else the element has more than 4 1's is no valid utf-8 enconding  
        } else {  
            if ((c >> 6) != 0b10) return 0; 	 	 //if the element doesn't start whit 10 as we are expecting is not valid  
            count--;  								 //now we are expecting one less byte to start with 10  
        }  
    }  
        if (count == 0){							//if count is 0 by the end of the caracter this means this caracter is valid  
        	return 1;  
        }  
}   
We repeat this sample code for every character which first bit is different than 0 (because if its 0 this means is a 1 byte character and its valid) and if we recieve a 0 (false) we print: "invalid encoding". If we only get 1's we print: "valid encoding".
# Kata 2

A password is considered strong if below conditions are all met:

    It has at least 6 characters and at most 20 characters.
    It must contain at least one lowercase letter, at least one uppercase letter, and at least one digit.
    It must NOT contain three repeating characters in a row ("...aaa..." is weak, but "...aa...a..." is strong, assuming other conditions are met).

Write a function strongPasswordChecker(s), that takes a string s as input, and return the MINIMUM change required to make s a strong password. If s is already strong, return 0.

Insertion, deletion or replace of any one character are all considered as one change.

---------------------------------------------------------------------------------------------------------------
I would turn all characters of the string into an array of char's, then use their values in ASCII to know if they are lowercase, uppercase, digits, and if 3 characters are repeated in a row. Then count how many characters there are and, if there are more than 20 characters or less than 6 then save the difference in an integer minimum. Then if any of the remaining constraints are not satisfied sum 1 to minimum, if the number of the characters is already 20 sum 1 again. Finally return the integer minimum.
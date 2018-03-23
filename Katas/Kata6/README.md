# Kata 6

Rules:    
Before each jump, the heat-signature device will provide Batman with the direction of the bombs based on Batman current position:

    U (Up)
    UR (Up-Right)
    R (Right)
    DR (Down-Right)
    D (Down)
    DL (Down-Left)
    L (Left)
    UL (Up-Left)

Your mission is to program the device so that it indicates the location of the next window Batman should jump to in order to reach the bombs' room as soon as possible.    
Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0). 

--------------------------------------------------
Initialization input:  
Line 1 : 2 integers W H. The (W, H) couple represents the width and height of the building as a number of windows.  
Line 2 : 1 integer N, which represents the number of jumps Batman can make before the bombs go off.  
Line 3 : 2 integers X0 Y0, representing the starting position of Batman.  

-----------------------------------------------------
Input for one game turn:  
The direction indicating where the bomb is.

---------------------------------------------------
Solution:  
  
-First, create 4 control variables Wmin, Wmax, Hmin, Hmax (declare them outside the while loop)  
--Wmin (X coordinate of the left-part of the new area to search)  
--Wmax (X coordinate of the right-part of the new area to search)  
--Hmin (Y coordinate of the lower-part of the new area to search)  
--Hmax (Y coordinate of the upper-part of the new area to search)  
----Since the first area to search on is the full building initialize the variables as follow:  
------Wmin=W  
------Wmax=0  
------Hmin=0  
------Hmax=H  
  
-Then, in side the while loop create 6 if's  
--The first 4 check for the the first letter on the bomb direction (U, D, L or R)  
--The last 2 check for the second letter on the bomb location (because the second character can only be L or R)  
  
----If the character is D  
------Then, assing the value of Y0 to Hmin (We discard the values lower to Y0 because we already know the bomb isn't there)  
------Also, sum the half of the difference between the Hmax and Hmin to Y0 and assing it that value  
--------Y0=Y0+(Hmax-Hmin)/2 (Because we know the bomb is below Batman)  
  
----If the character is U  
------Then, assing the value of Y0+1 to Hmax (We discard the values higher to Y0 because we already know the bomb isn't there)  
------Also, substract the half of the difference between the Hmax and Hmin from Y0 and assing it that value  
--------Y0=Y0-(Hmax-Hmin)/2 (Because we know the bomb is above Batman)  
  
----If the character is L  
------Then, assing the value of X0+1 to Wmax (We discard the values lower to X0 because we already know the bomb isn't there)  
------Also, substract the half of the difference between the Wmax and Wmin from X0 and assing it that value  
--------X0=X0-(Wmax-Wmin)/2 (Because we know the bomb is left from Batman)  
  
----If the character is R  
------Then, assing the value of X0 to Wmin (We discard the values higher to X0 because we already know the bomb isn't there)  
------Also, sum the half of the difference between the Wmax and Wmin to X0 and assing it that value  
--------X0=X0+(Wmax-Wmin)/2 (Because we know the bomb is right from Batman)  
  
-Finaly, print the values of X0 and Y0  
--printf("%d %d\n", X0, Y0)  
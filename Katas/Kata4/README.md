# Kata 3

65. Valid Number  
  
Validate if a given string is numeric.  
  
Some examples:  
"0" => true  
" 0.1 " => true  
"abc" => false  
"1 a" => false  
"2e10" => true  
  
Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.  

---------------------------------------------------------------------------------------------------------------
-Pueden limitar a 255 caracteres.  
-Para la parte decimal usen punto. Pero la coma también es valida por ejemplo 1,000.95 es valido. La coma debe estar en el lugar correcto. 10,0 este no es un número.  
-Solo e en minúsculas. Después de la e no puede ir un número decimal .ie. 45e87.98 no es valido pero e45 si  
-Es posible, pero no obligatorio, el simbolo sería la coma , .  1,000 y 1000 son correctos, i.e, la coma no es obligatoria  
-Si +45 o -45 son validos  
-Si 45e-2 o 45e+56 es valido  
-Profesor una pregunta para la Kata,   
¿se pueden tener espacios en blanco antes y/o despues de el numero?   
Por ejemplo “    452.20    “  
¿Como manejamos esta clase de casos?  
La respuesta es si, se deben ignorar pueden tener un while(char == ' ') al principio y al final. Lo que no es valido son espacios intermedios  
-0.5757 Si y sin 0 también i.e, .5757  
-Solo decimales de menos infinito a + infinito.  
-No, solo con un 0.1 es valida o .1 pero si 1.000 o .000  

------------------------------------------------------------------------------------------------------------
-Empezamos a leer  
...El número debe de ser de máximo 255 caracteres  
...Primera casilla acepta +,-,.,0-9,"",e  
...Solo puede haber un punto máximo por número y tiene que estar antes de la e  
...Solo puede haber una e máximo por número  
...Pueden haber 2 signos +,- al inicio y despues de la e  
...Si hay comas deben de estar separadas por 3 digitos cada una  
...Al inicio si hay un 0 inmediatamente despues debe de seguir un ".", una ",", una "e" o terminar el número  
...En cuando se encuentre con un punto marcar una variable booleana para identificarlo (hacer lo mismo para la e)   
...Si se encuentra con una e y no se ha usado el marcador booleando de punto marcarlo  
...Si se encuentra una coma esperar 3 digitos más y despues de eso otra coma, que se acabe el número, un punto o una e 

---------------------------------------------------------------------------------------------------------------

-Primero se lee un String de 256 caracteres; Se checa si el caracter 256 es diferente de nulo, si hay algo significa que el string es muy largo para ser admitido por nuestro algoritmos y regresa falso.  
Despues, checamos si hay espacios vacios al inicio del String a leer con un while. Una vez terminado el while (es decir que ya no tenemos espacios en blanco al inicio del String) podemos comenzar a validar si nuestro String es un número: 
(Si el string esta lleno de puros espacios en blanco regresa falso) 
-La primera casilla despues de esto acepta +,-,.,0-9,e.  
-Si es un '.' o una 'e' se marca el bool designado para identificar que ya no se puede usar el '.' ni la ','.  
--Si es una 'e' tambien es necesario marcar el bool designado para identificar que ya no se puede usar e.  
-Si es un 0 debe de estar seguido de un '.' de lo contrario no es valido.  
  
-De la segunda casilla en adelante ya no se admiten signos '+' y '-' a menos que se lea una e.  
--Si en la casilla anterior hay un dígito (obviamente diferente de cero para la segunda casilla) puede o no haber una coma con la regla de que debe de estar seguido de 3 digitos. (esta regla aplica hasta el tercer digito, si despues del tercer dígito se encuentra con una coma el número ya no es valido).  
-Despues de la 'e' puede seguir '+','-' o un dígito.  
--Despues de esto solo puede haber dígitos.  

-Si de haber pasado todas estas pruebas se encuentra con un espacio en blanco el String se pondra en otro while para verificar que solo queden puros espacios en blanco despues del número.  
  
Con una condición de las siguientes que no se cumpla el programa regresa falso, de lo contrario regresa verdadero.  
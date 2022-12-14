int add(int j, int k);
int sub(int j, int k);
int div(int j, int k);
int mul(int j, int k);
int mod(int j, int k);


/**
* add - adds two integers
* @j: first integer to add
* @k: second integer to add
* Return: the sum
*/

int add(int j, int k)
{
	return (j + k);
}



/**
* sub - subtracts two integers
* @j: first integer 
* @k: second integer
* Return: subtractions
*/

int sub(int j, int k)
{
        return (j - k);
}


/**
* div - divides two integers
* @j: first integer 
* @k: second integer 
* Return: divided integer
*/

int div(int j, int k)
{
        return (j / k);
}


/**
* mul - multiplies two integers
* @j: first integer 
* @k: second integer 
* Return: the Multiple
*/

int mul(int j, int k)
{
        return (j * k);
}



/**
  mod - finds the modulus of two integers
  @i: first integer 
  @k: second integer 
  Return: the modulus
*/

int mod(int j, int k)
{
        return (j % k);
}

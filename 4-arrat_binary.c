void array_binary(int prueba, char *binary)
{
        int i = 0;
        int a = 1;
        for (i = 0; i < 32; i++)
        {
                unsigned int p = ((a<<(31 - i)) & prueba);
                char b = p>>( 31 - i);
                binary[i] = (b + '0');
        }
}

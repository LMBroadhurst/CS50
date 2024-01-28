
// Loops are kind of a smell for iteration
void draw(int n) 
{
    // If theres nothing to draw
    if (n <=0)
    {
        return;
    }

    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }

    print("\n");
}
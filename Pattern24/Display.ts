function Display(No : number,No2 : number) 
{
    var i : number = 0;
    var j : number = 0;

    for(i = 1;i <= No;i++)
    {
        for(j = 1;j <= No2;j++)
        {
            if(i == j)
            {
                process.stdout.write("$\t");
            }
            else 
            {
                process.stdout.write("*\t");
            }
        }
        console.log();
    }
}

function main() 
{
    var No : number = 4;
    var No2 : number = 4;

    console.log("Jay Ganesh....");

    Display(No,No2);
}

main();
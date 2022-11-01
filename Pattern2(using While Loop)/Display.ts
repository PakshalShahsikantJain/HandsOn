function Pattern(No : number) 
{
    while(No > 0)
    {
        process.stdout.write("*\t");
        No--;
    }
}
function main() 
{
    console.log("Jay Ganesh......");
    var no : number = 5;

    Pattern(no);
}

main();
/*
    Author : Pakshal Shashikant Jain
    Date : 07/10/2023
    Program : Write a program which accept string from user and print below pattern.
    
              Input : "Marvellous"
              Output : m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
                       m a r v e l l o u s
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
function Pattern(arr : any[])
{
    var i : number = 0;
    var j : number = 0;
    var ascii : number = 0;

    //Printing Below Given Pattern
    console.log("Printing Given Pattern : ");
    for(i = 0;i < arr.length;i++)
    {
        for(j = 0;j < arr.length;j++)
        {
            if((arr[j] >= 'A')&&(arr[j] <= 'Z')) 
            {
                ascii = arr[j].charCodeAt() + 32;
                arr[j] = String.fromCharCode(ascii);
            }
            process.stdout.write(arr[j]+"\t");
        }
        console.log();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    var str : string = "Pakshal";
    var arr : any[] = Array.from(str);

    console.log("Jay Ganesh.....");

    //Call To Pattern Function
    Pattern(arr);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
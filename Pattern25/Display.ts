/*
	Author : Pakshal Shashikant Jain 
	Date : 01/04/2023
	Program : To Print Below Given Pattern

	Input : iRow = 6 iCol = 5 
	Output : * * * * *
			 * @ @ @ *
			 * @ @ @ *
			 * @ @ @ *
			 * @ @ @ *
			 * * * * * 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Below Given Pattern
function Pattern(No : number,No2 : number) 
{
    var i : number = 0;
    var j : number = 0;

    //Loigc To Print Pattern 
    console.log("Printing Below Given Pattern : ");
    for(i = 1;i <= No;i++)
    {
        for(j = 1;j <= No2;j++)
        {
            if((i == 1)||(j == 1)||(i == No)||(j == No2))
            {
                process.stdout.write("*\t");
            }
            else 
            {
                process.stdout.write("@\t");
            }
        }
        console.log();
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var No : number = 6;
    var No2 : number = 5;

    console.log("Jay Ganesh....");

    Pattern(No,No2);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
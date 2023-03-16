/*
    Author : Pakshal Shashikant Jain
    Date : 16/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 4
    Output : 2 4 6 8 10
             1 3 5 7 9
             2 4 6 8 10
             1 3 5 7 9 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Given Pattern
function Pattern(No : number,No2 : number) {
    var i : number = 0;
    var j : number = 0;
    var k : number = 1;
    var l : number = 1;
    var no : number = 0;

    //Logic To Print Pattern
    console.log("Printing Below Given Pattern : ");
    for(i = 0;i < No;i++)
    {
        for(j = 0;j < No2;j++) 
        {
            if(i % 2 == 0)
            {
                no = k * 2;
                process.stdout.write(no+"\t");
                k = k + 1;
            }
            else 
            {
                process.stdout.write(l+"\t");
                l = l + 2;
            }
        }
        k = 1;
        l = 1;
        console.log();
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() {
    var No : number = 4;
    var No2 : number = 5;

    console.log("Jay Ganesh......");

    //Call To Pattern Function
    Pattern(No,No2);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
main();
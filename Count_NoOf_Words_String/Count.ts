/*
    Author : Pakshal Shashikant Jain
    Date : 22/09/2023
    Program : Write a program which accept string from user count number of
              words from string
              
              Input : "Marvellous Multi OS"
              Output : 3
              
              Input : "              Marvellous                  Multi           OS             Pune"
              Output : 4 
*/

///////////////////////////////////////////////////////////////////////////////////

//Function To Count Number of Words in Entered String
function WordCount(str : any[]) : number
{
    var i : number = 0;
    var icnt : number = 1;

    if (str[i] == ' ') 
    {
        while(str[i] == ' ')
        {
            i++;
        }
    }

    //Logic To Count
    while(i != str.length)
    {
        if(str[i] == ' ')
        {
            while((str[i] == ' ')&&(i != str.length))
            {
                i++;               
            }
            icnt++;
        }

        i++;
    }

    return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main()
{
    var iret : number = 0;
    var str : string = "      Marvellous        multi     OS    Pune";
    var arr : any[];

    console.log("Jay Ganesh....");

    //Creating Character Array of Entered String
    arr = Array.from(str);

    //Call To WordCount Function
    iret = WordCount(arr);

    //Printing Count of Wrods
    console.log("Count of Word is : "+iret);
}

//Call To Main Function
main();
/*
    Author : Pakshal Shashikant Jain 
    Date : 09/08/2023
    Program : Write a program which accept string from user and check whether
              it contains vowels in it or not.

             Input : "marvellous"
             Output : TRUE

             Input : "Demo"
             Output : TRUE

             Input : "xyz"
             Output : FALSE 
 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
function Check(arr : any[]) : boolean
{
    var i : number = 0;

    //Logic To Check
    for(i = 0;i < arr.length;i++)
    {
        if((arr[i] == 'a')||(arr[i] == 'e')||(arr[i] == 'i')||(arr[i] == 'o')||(arr[i] == 'u')||(arr[i] == 'A')||(arr[i] == 'E')||(arr[i] == 'I')||(arr[i] == 'O')||(arr[i] == 'U'))
        {
            break;
        }
    }
    
    if((arr[i] == 'a')||(arr[i] == 'e')||(arr[i] == 'i')||(arr[i] == 'o')||(arr[i] == 'u')||(arr[i] == 'A')||(arr[i] == 'E')||(arr[i] == 'I')||(arr[i] == 'O')||(arr[i] == 'U'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
function main() 
{
    var str : string = "XYZ";
    var arr : any[] = Array.from(str);
    var bret : boolean = false;

    console.log("Jay Ganesh.....");

    //Call To Check Function
    bret = Check(arr);

    //Handeling Conditions According To Output 
    if(bret == true) 
    {
        console.log("String Contains Vowels");
    }
    else 
    {
        console.log("String Does Not Contains Vowels");
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Call To Main Function
main();
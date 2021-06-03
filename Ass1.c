# include <stdio.h>
# include <string.h>

int main( )
{
    // Writing data to file
	FILE *filePointer1 ;
	char dataToBeWritten[50]="This is a randomly generated sentence";

	filePointer1 = fopen("Assignment1.c", "w") ;

	if ( filePointer1 == NULL )
	{
		printf( "Assignment1.c file failed to open." ) ;
	}
	else
	{
		printf("The file is now opened.\n") ;

		if ( strlen ( dataToBeWritten ) > 0 )
		{
			fputs(dataToBeWritten, filePointer1) ;
			fputs("\n", filePointer1) ;
		}

		fclose(filePointer1) ;

		printf("Data successfully written in file Assignment1.c\n");
		printf("The file is now closed.") ;
	}

    printf("\n-------------------------------------------------------------------------\n");

    // Reading data from file
    FILE *filePointer2 ;

    char dataToBeRead[50];

    filePointer2 = fopen("Assignment1.c", "r") ;

    if ( filePointer2 == NULL )
    {
        printf( "Assignment1.c file failed to open." ) ;
    }
    else
    {
        printf("The file is now opened.\n") ;

        while( fgets ( dataToBeRead, 50, filePointer2 ) != NULL )
        {
            printf( "Data in the file is: %s" , dataToBeRead ) ;
        }

        fclose(filePointer2) ;

        printf("Data successfully read from file Assignment1.c\n");
        printf("The file is now closed.") ;
    }
    return 0;
}

/**
  ****************************************************************************
  * @file    main.c
  * @author  Marrouki sirine
  * @brief   Macros 
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/

#define INTEL
#define SUM
#define OTHERS
#define MUL


/* Private function prototypes -----------------------------------------------*/
static int sum(int x, int y);
static int mul(int x, int y);

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
#ifdef INTEL
  #ifdef SOM
 int SumResult=sum(3,4); 
#endif
 
#ifdef MIN
 int MinResult=min(3,4);
 #endif
#endif
 
#ifdef OTHERS 
  #ifdef MUL
 int mulResult=mul(3,4); //generic
#endif
 
  #ifdef MAX
 int maxResult=max(3,4);
  #endif
#endif
  while(1)
  
  {   
  }
}
#ifdef INTEL
#ifdef SOM 
static int sum(int x, int y)

{
  
  return (x+y);
  
}
#endif


#ifdef MIN
#define MIN  (((x)<(y))? (x) : (y)) 
{


  
  return (MIN);
  
}
#endif
#endif
#ifdef OTHERS
#ifdef MUL
static int mul(int x, int y)

{
  
  return (x*y);
  
}
#endif
#ifdef MAX
#define MAX (((x)>(y))? (x) : (y))
{


  
  return (MIN);
  
}
#endif
#endif
/**************************************END OF FILE**************************************/
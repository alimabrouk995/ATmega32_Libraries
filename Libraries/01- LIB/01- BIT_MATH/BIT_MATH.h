/*
 * BIT_MATH.h
 *
 * Created: 12/8/2022 10:16:37 PM
 *  Author: alima
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(R,N) R|=1<<N
#define CLEAR_BIT(R,N) R&=~(1<<N)
#define TOGGLE_BIT(R,N) R^=(1<<N)
#define GET_BIT(R,N) ((R&(1<<N))>>N)



#endif /* BIT_MATH_H_ */
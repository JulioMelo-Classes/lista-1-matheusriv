#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

/*
ok
*/
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Coloque aqui seu código.

    if(P.x > IE.x and P.x < SD.x and P.y > IE.y and P.y < SD.y){
        return location_t::INSIDE;
    }
    else if( (P.x >= IE.x && P.x <= SD.x && P.y == IE.y) || (P.x >= IE.x && P.x <= SD.x && P.y == SD.y) ){
        return location_t::BORDER;
    }
    else if( (P.x == IE.x && P.y >= IE.y && P.y <= SD.y) || (P.x == SD.x && P.y >= IE.y && P.y <= SD.y) ){ 
        return location_t::BORDER;
    }

    return location_t::OUTSIDE;
}

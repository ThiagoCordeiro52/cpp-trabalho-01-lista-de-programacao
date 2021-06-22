#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // Conditionals created by analyzing a drawing of a rectangle.
    if(P.x > IE.x && P.x < SD.x && P.y > IE.y && P.y < SD.y)
    {
        // Case where the point does not touch the edge and is inside the rectangle
        return location_t::INSIDE;
    } else if(P.x >= IE.x && P.x <= SD.x && P.y == IE.y  || P.x == SD.x && P.y >= IE.y && P.y <= SD.y || 
    P.x >= IE.x && P.x <= SD.x && P.y == SD.y || P.x == IE.x && P.y >= IE.y && P.y <= SD.y)
    {   // Case where the stitch is touching the edge
        // Bottom - Right - Top - Left
        return location_t::BORDER;
    } else {
        // Case where the point is outside the rectangle
        return location_t::OUTSIDE;
    }

    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    return location_t::OUTSIDE;
}

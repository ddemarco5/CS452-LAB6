Check to see which is the closest occluder to the light source and set it's visibility, for example

if(shadowmap at Shadowcoord.z) < ShadowCoord.z) visibility = 0.5

and the color is then set., e.g.

out_color = AmbientColor + visibility*materialcolor * lights

This will render our image with a shadow map, but without further tweaking there will be some visual errors.
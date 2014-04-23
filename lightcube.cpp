Step 1:

Render scene from angle of light with specialized shaders (shadowvshader and shadowfshader)
Save the framebuffer as a shadow texture that will be applied to a second render

Step 2:

Compare the depths of the normal camera render to that of the shadow map (This requires transforming to the perspective of the shadow render)
We now render the scene with specialized shaders to render the shadow as well as the shapes. (see vertexshader and fragmentshader)
/*
 *  �FILENAME�
 *  �PROJECTNAME�
 *
 *  Created by �FULLUSERNAME� on �DATE�.
 *  Copyright �YEAR� �ORGANIZATIONNAME�. All rights reserved.
 *
 */

uniform sampler2D tex;

void main()
{
	gl_FragColor = gl_Color * texture2D(tex, gl_TexCoord[0].xy);
}

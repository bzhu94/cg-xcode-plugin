/*
 *  ÇFILENAMEÈ
 *  ÇPROJECTNAMEÈ
 *
 *  Created by ÇFULLUSERNAMEÈ on ÇDATEÈ.
 *  Copyright ÇYEARÈ ÇORGANIZATIONNAMEÈ. All rights reserved.
 *
 */

uniform sampler2D tex;

void main()
{
	gl_FragColor = gl_Color * texture2D(tex, gl_TexCoord[0].xy);
}

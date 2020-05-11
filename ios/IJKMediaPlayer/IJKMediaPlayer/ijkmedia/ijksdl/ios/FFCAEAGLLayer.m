//
//  FFCAEAGLLayer.m
//  IJKMediaFramework
//
//  Created by 王宁 on 2020/5/11.
//  Copyright © 2020 bilibili. All rights reserved.
//

#import "FFCAEAGLLayer.h"
#include "ijksdl/ijksdl_gles2.h"

@implementation FFCAEAGLLayer

- (void)renderInContext:(CGContextRef)ctx
{
    [super renderInContext: ctx];
    [self.renderDelegate renderInContext:ctx];
    
}
@end

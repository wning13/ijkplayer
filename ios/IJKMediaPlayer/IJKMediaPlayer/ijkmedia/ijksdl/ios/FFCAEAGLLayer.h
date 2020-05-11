//
//  FFCAEAGLLayer.h
//  IJKMediaFramework
//
//  Created by 王宁 on 2020/5/11.
//  Copyright © 2020 bilibili. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@protocol FFCAEAGLLayerDelegate <NSObject>

@required
- (void) renderInContext: (CGContextRef) context;

@end

@interface FFCAEAGLLayer : CAEAGLLayer

@property (weak, nonatomic) id<FFCAEAGLLayerDelegate>renderDelegate;

@end

NS_ASSUME_NONNULL_END

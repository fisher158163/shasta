//
//  QuartzCorePrivate.h
//  Appearance Maker
//
//  Created by Guilherme Rambo on 26/03/17.
//  Copyright © 2017 Guilherme Rambo. All rights reserved.
//

@import Cocoa;
@import QuartzCore;

// extern = "这个符号定义在其他地方（系统库），这里只是声明它存在"
// 告诉编译器：这些函数/变量不是在当前文件中实现的，而是在链接时从其他地方引入
// 这三个符号来自 Apple 的私有 QuartzCore 框架
extern NSData *CAEncodeLayerTree(CALayer *rootLayer);
extern NSString *kCAPackageTypeArchive;
extern NSString *kCAPackageTypeCAMLBundle;

@interface CAFilter: NSObject<NSCopying, NSMutableCopying, NSCoding>
+ (instancetype)filterWithType:(NSString *)type;
+ (NSArray <NSString *> *)filterTypes;
- (NSArray <NSString *> *)outputKeys;
- (NSArray <NSString *> *)inputKeys;
- (void)setDefaults;
@property(copy) NSString *name;
@property(readonly) NSString *type;
@property(getter=isEnabled) BOOL enabled;
@end

@interface CAPackage: NSObject
+ (id)packageWithData:(NSData *)data type:(NSString *)type options:(id)opts error:(NSError **)outError;
+ (id)packageWithContentsOfURL:(NSURL *)url type:(NSString *)type options:(id)opts error:(NSError **)outError;
- (NSArray <NSString *> *)publishedObjectNames;
@property(readonly, getter=isGeometryFlipped) BOOL geometryFlipped;
@property(readonly) CALayer *rootLayer;
@end

@interface CAStateController: NSObject;
@property (readonly) CALayer* layer; 
-(void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3;
-(void)setState:(id)arg1 ofLayer:(id)arg2;
-(id)stateOfLayer:(id)arg1;
-(id)initWithLayer:(id)arg1;
-(void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2;
-(void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4;
@end

@interface CAState: NSObject;
@end

@interface CALayer (CAState)
- (nullable NSString *)caStateName:(id)state;
@end

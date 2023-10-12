/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDebugTreeNode : NSObject {
    NSArray * _children;
    VKDebugTreeNode * _parent;
}

@property (retain) NSArray *children;
@property (readonly) NSString *name;
@property (readonly) VKDebugTreeNode *parent;

- (void).cxx_destruct;
- (id)children;
- (id)initWithParent:(id)arg1;
- (bool)isExpandable;
- (id)name;
- (id)parent;
- (id)propertyColumn;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (void)setChildren:(id)arg1;
- (id)tagsColumn;
- (id)valueColumn;

@end
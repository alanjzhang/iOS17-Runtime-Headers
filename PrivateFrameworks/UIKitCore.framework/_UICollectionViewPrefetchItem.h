/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewPrefetchItem : NSObject {
    UICollectionViewLayoutAttributes * _attributes;
    struct { 
        unsigned int needsLayoutAttributesUpdate : 1; 
        unsigned int needsPreferredAttributesUpdate : 1; 
        unsigned int needsReconfigure : 1; 
    }  _flags;
    UICollectionReusableView * _view;
}

@property (nonatomic, retain) UICollectionReusableView *view;

- (void).cxx_destruct;
- (id)description;
- (void)setView:(id)arg1;
- (id)view;

@end

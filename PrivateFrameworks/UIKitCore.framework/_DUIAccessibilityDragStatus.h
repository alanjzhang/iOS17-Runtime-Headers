/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _DUIAccessibilityDragStatus : NSObject <NSSecureCoding> {
    bool  _forbidden;
    long long  _itemCount;
    unsigned long long  _potentialOperation;
}

@property (nonatomic) bool forbidden;
@property (nonatomic) long long itemCount;
@property (nonatomic) unsigned long long potentialOperation;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)forbidden;
- (id)initWithCoder:(id)arg1;
- (long long)itemCount;
- (unsigned long long)potentialOperation;
- (void)setForbidden:(bool)arg1;
- (void)setItemCount:(long long)arg1;
- (void)setPotentialOperation:(unsigned long long)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAccountVirtualCardStatusUpdate : NSObject <NSSecureCoding, PKRecordObject> {
    unsigned long long  _reason;
    NSArray * _updatedVirtualCards;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long reason;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *updatedVirtualCards;

+ (id)recordNamePrefix;
+ (id)recordType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)reason;
- (void)setReason:(unsigned long long)arg1;
- (void)setUpdatedVirtualCards:(id)arg1;
- (id)updatedVirtualCards;

@end

/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRApplicationLauncherClusterLauncherResponseParams : NSObject <NSCopying> {
    NSData * _data;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

// MTRApplicationLauncherClusterLauncherResponseParams (null)

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setData:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)status;
- (id)timedInvokeTimeoutMs;

@end

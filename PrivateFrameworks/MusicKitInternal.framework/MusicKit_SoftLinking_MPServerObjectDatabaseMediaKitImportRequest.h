/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MusicKitInternal.framework/MusicKitInternal
 */

@interface MusicKit_SoftLinking_MPServerObjectDatabaseMediaKitImportRequest : NSObject {
    MPServerObjectDatabaseMediaKitImportRequest * _underlyingImportRequest;
}

@property (nonatomic, readonly) MPServerObjectDatabaseMediaKitImportRequest *_underlyingImportRequest;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly) id payload;
@property (nonatomic, retain) ICUserIdentity *userIdentity;

- (void).cxx_destruct;
- (id)_underlyingImportRequest;
- (id)expirationDate;
- (id)initWithPayload:(id)arg1;
- (id)payload;
- (void)setExpirationDate:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (id)userIdentity;

@end

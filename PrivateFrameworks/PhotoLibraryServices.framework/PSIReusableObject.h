/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIReusableObject : NSObject {
    bool  _isPreparedForReuse;
    bool  _isPreparedFromStatement;
    bool  _isPreparingFromStatement;
}

@property (nonatomic, readonly) bool isPreparedFromStatement;

- (void)didPrepareFromStatement:(struct sqlite3_stmt { }*)arg1;
- (id)init;
- (bool)isPreparedFromStatement;
- (void)prepareForReuse;
- (void)prepareFromStatement:(struct sqlite3_stmt { }*)arg1;

@end

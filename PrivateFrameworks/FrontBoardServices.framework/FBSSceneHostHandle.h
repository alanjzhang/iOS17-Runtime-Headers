/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneHostHandle : NSObject {
    BSAuditToken * _auditToken;
    bool  _local;
}

@property (nonatomic, readonly) BSAuditToken *auditToken;
@property (getter=isLocal, nonatomic, readonly) bool local;

+ (id)handleWithAuditToken:(id)arg1;
+ (id)localHandle;

- (void).cxx_destruct;
- (id)auditToken;
- (id)description;
- (bool)isLocal;

@end

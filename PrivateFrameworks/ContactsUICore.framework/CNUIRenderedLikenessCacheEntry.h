/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIRenderedLikenessCacheEntry : NSObject {
    NSArray * _contacts;
    CNObservable * _imageObservable;
    CNUILikenessRenderingScope * _scope;
    <CNCancelable> * _token;
}

@property (nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) CNObservable *imageObservable;
@property (nonatomic, readonly) CNUILikenessRenderingScope *scope;
@property (nonatomic, readonly) <CNCancelable> *token;

+ (id)entryWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4;

- (void).cxx_destruct;
- (id)contacts;
- (id)description;
- (id)imageObservable;
- (id)initWithObservable:(id)arg1 token:(id)arg2 contacts:(id)arg3 scope:(id)arg4;
- (id)scope;
- (id)token;

@end

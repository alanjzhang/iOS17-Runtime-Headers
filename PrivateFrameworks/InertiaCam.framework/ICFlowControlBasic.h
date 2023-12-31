/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

@interface ICFlowControlBasic : NSObject <ICFlowControl> {
    id /* block */  reportProgress;
    id /* block */  shouldBeCanceled;
}

@property (nonatomic, copy) id /* block */ reportProgress;
@property (nonatomic, copy) id /* block */ shouldBeCanceled;

// ICFlowControlBasic (null)

- (void).cxx_destruct;
- (void)ICReportProgress:(float)arg1;
- (bool)ICShouldBeCanceled;
- (id)initWithCancel:(id /* block */)arg1;
- (id)initWithProgress:(id /* block */)arg1;
- (id /* block */)reportProgress;
- (void)setReportProgress:(id /* block */)arg1;
- (void)setShouldBeCanceled:(id /* block */)arg1;
- (id /* block */)shouldBeCanceled;

@end

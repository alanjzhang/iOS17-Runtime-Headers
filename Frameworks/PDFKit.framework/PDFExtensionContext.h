/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFExtensionContext : NSExtensionContext <PDFExtensionProtocol> {
    PDFExtensionViewController * _extensionViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PDFExtensionViewController *extensionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (void)initialize;

- (void).cxx_destruct;
- (id)extensionViewController;
- (oneway void)hostToExtension:(id)arg1;
- (void)setExtensionViewController:(id)arg1;

@end
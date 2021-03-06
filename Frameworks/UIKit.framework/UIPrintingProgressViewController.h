/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintingProgressViewController : UITableViewController {
    UIPrintingMessageView *_messageView;
    UINavigationController *_navController;
    UIPrintingProgress *_printingProgress;
    double _rotationDelay;
    UIWindow *_window;
}

- (void)cancelProgress;
- (void)cleanupAfterDismiss;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)doneProgress;
- (id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3;
- (double)rotationDelay;
- (void)setDonePrinting:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)show;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)visible;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end

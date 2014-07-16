//
//  HistoryViewController.h
//  ProteinTracker
//
//  Created by Scott on 15/07/2014.
//  Copyright (c) 2014 Scott O'Halloran. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HistoryViewController : UIViewController{
    NSMutableArray *history;
}
@property (weak, nonatomic) IBOutlet UILabel *historyLabel;
-(void) setHistory:(NSMutableArray *)h;
@end
